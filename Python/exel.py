import pandas as pd

df=pd.read_excel('timetable.xlsx',sheet_name='Sheet1')

df=df.dropna(how='all')
df=df.duplicated()

if "Name" in df.columns:
        df["Name"] = df["Name"].str.title()   # proper case
if "Email" in df.columns:
        df["Email"] = df["Email"].str.lower() # lowercase emails
if "Phone" in df.columns:
        df["Phone"] = df["Phone"].astype(str).str.replace(r"\D", "", regex=True)
 
print(df)
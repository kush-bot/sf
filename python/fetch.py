import yfinance as yf


df = yf.download("RELIANCE.NS",period='60d',interval='5m')
df.to_csv("relaince.csv");

import tweepy
import pandas as pd

# Replace with your own Twitter API keys
consumer_key = 'YOUR_CONSUMER_KEY'
consumer_secret = 'YOUR_CONSUMER_SECRET'
access_token = 'YOUR_ACCESS_TOKEN'
access_token_secret = 'YOUR_ACCESS_TOKEN_SECRET'

# Authenticate with Twitter API
auth = tweepy.OAuthHandler(consumer_key, consumer_secret)
auth.set_access_token(access_token, access_token_secret)
api = tweepy.API(auth)

# Search for tweets with a specific keyword
keyword = 'your_keyword'
num_tweets = 100  # Change this to the number of tweets you want to collect

tweets = []
for tweet in tweepy.Cursor(api.search, q=keyword, lang='en').items(num_tweets):
    tweets.append(tweet.text)

# Analyze the collected data
tweet_df = pd.DataFrame(tweets, columns=['Tweets'])
print(tweet_df.head())

# You can perform various analyses on the collected data here
# For example, sentiment analysis or word frequency analysis

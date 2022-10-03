#Python Program to create a word cloud using the words in the text document.
'''
Word Cloud is a data visualization technique used for representing text data in which the size of each word indicates 
its frequency or importance. Significant textual data points can be highlighted using a word cloud. 
Word clouds are widely used for analyzing data from social network websites.
'''
import matplotlib.pyplot as pyplot
from wordcloud import WordCloud, STOPWORDS
import numpy as np
from PIL import Image

dataset = open("something.txt","r").read()
def create_word_cloud(string):
    mask_array = np.array(Image.open("cloud.png"))
    cloud = WordCloud(background_color = "white", max_words = 200, mask = mask_array, stopwords = set(STOPWORDS))
    #max_words can be set to  any value.
    cloud.generate(string)
    cloud.to_file("MainImg.png") #Word-Cloud Image generated.
dataset = dataset.lower()
create_word_cloud(dataset)
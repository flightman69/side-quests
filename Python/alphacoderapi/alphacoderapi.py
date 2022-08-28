import requests
import os

# Using Wallhaven API
def wallpaper_search_api(query):
	url = f"https://wall.alphacoders.com/api2.0/get.php?method=newest&page=1&info_level=2&page=2"
	res = requests.get(url)
	json_data = res.json()
	dl_links = []
	for walldlurl in json_data["wallpapers"]:
		 dl_links.append(walldlurl["url_image"])

	return dl_links

# Downloading Wallpapers from URL
def download_wallpaper(url,topic,no):
	print(f"Downloading... {url}")
	res = requests.get(url)
	wall_name = topic.replace('+','_') + "_"+str(no)
	topic = "/home/flightman/Pictures/wallpaper/walldl/"+topic.replace("+","_")
	if not os.path.exists(topic):
		os.makedirs(topic)
	ext = os.path.splitext(url)[1]
	dl_path = f"{topic}/{wall_name}{ext}"
	open(dl_path, 'wb').write(res.content)




def main():
	topic = input("What you want to download : ").lower()
	print("\t[Downloding wallpapers from https://wallhaven.cc/]\n\n")
	topic = topic.replace(" ","+")
	search_query = wallpaper_search_api(topic)
	no = 1
	for wallpaper_url in search_query:
		download_wallpaper(wallpaper_url,topic,no)
		no += 1
		

main()
	

# 1 "data/maps/Route219/scripts.pory"

# 2 "data/maps/Route219/scripts.pory"
Route219_MapScripts::
# 3 "data/maps/Route219/scripts.pory"
	.byte 0

Route219_SignScript_SandgemBeach::
# 7 "data/maps/Route219/scripts.pory"
	lock
# 8 "data/maps/Route219/scripts.pory"
	msgbox Route219_SignScript_SandgemBeach_Text_0
# 9 "data/maps/Route219/scripts.pory"
	release
	return


Route219_SignScript_SandgemBeach_Text_0:
# 8 "data/maps/Route219/scripts.pory"
	.string "{DOWN_ARROW} Sandgem Beach$"

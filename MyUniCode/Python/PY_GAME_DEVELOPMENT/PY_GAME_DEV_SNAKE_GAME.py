#SNAKE GAME BUILDING USING PYTHON 
#Code splitted in 4 part

# //Part 1    //import screen create, and quit 

# //Part 2    //keep track of events by the events based on timing (eg:refresh screen)
	clock = pygame.timeclock()
		FPS=5
		blockSize=20
		noPixel=0

#  //Part 3 //Trying to draw snakes(chunks)	

	def snake(blockSize,snakeList):
		# x = 150-(segmen_width+segment_margin)*i
	for size in snakeList:
		pygame.draw.rect(gameDisplay,Black,size[0]+5,size[1],block)
	
	#display msg failed
	def message_to_screen(msg,color):
		screen_text =font.render(msg,True,color)
		gameDisplay.split(screen_text,[window_width/2,window_height/2])


#  //Part 4 //Main crucks //heart game 
		#//general setup , Event loop , logic part
		#//logic part -> Logic 1 -> (for key press)
		#			  -> Logic 2 -> (to maintain boundary)
		#			  -> Logic 3 -> (generate and draw random apples)
		#			  -> Logic 4 -> (Draw the snake)
		#			  -> Logic 5 -> (eat the apple)

def gameLoop():
	gameExit = False #ex: press and quit
	gameOver = False #ex: have another life recontinue

	#satic stuff
	Lead_x = window_width/2
	Lead_y = window_height/2

	#logic 4)
		snake(blockSize,snakeList)
		pygame.display.update

	clock.tick(FPS)
	pygame.quit()
	quit()
	gameLoop()

# import pygames,sys,os
# from pygame.locals import*
# pygame.init()

# # Set up the window
# 	DISPALYSURF = pygame.display.set_mode((400,300),0,32)
# 	pygame.display.set_caption('Drawing')#Title

# #set up the colors
# 	Black = (0,0,0)
# 	white = (255,255,255)
# 	Rred  = (255,0,0)
# 	Green =	(0,255,0)
# 	Blue  = (255,0,0)

# #draw on the surface object
# 	DISPALYSURF.fill(white)
# 	pygame.draw.line(DISPLAYSURF,Blue,(120,60),(60,120))
# #  //optional lines below
# 	pygame.draw.circle(DISPLAYSURF,Blue,(120,60),(60,120))  //after display surf color and coordinated are there
# 	pygame.draw.ellipse(DISPLAYSURF,Blue,(120,60),(60,120))
# 	pygame.draw.rectangle(DISPLAYSURF,Blue,(120,60),(60,120))
# 	pygame.draw.polygone(DISPLAYSURF,Blue,(120,60),(60,120))
# #  //optional end

# 	pixObj = pygame.PixelArray(DISPLAYSURF)
# 	pixObj[380][280] =Black
# 	pixObj[380][282] =Black

# 		del pixObj

# #Run the game loop
# 	while True:
# 		for event in pygame.event.get():
# 			if event.type==QUIT:
# 				pygame.quit()
# 			sys.exit()
# 		pygame.display.update()

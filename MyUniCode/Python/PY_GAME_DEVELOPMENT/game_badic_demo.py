import pygames,sys,os
from pygame.locals import*
pygame.init()

# Set up the window
	DISPLAYSURF = pygame.display.set_mode((400,300),0,32)
	pygame.display.set_caption('Drawing')#Title

#set up the colors
	Black = (0,0,0)
	white = (255,255,255)
	Rred  = (255,0,0)
	Green =	(0,255,0)
	Blue  = (255,0,0)

#draw on the surface object
	DISPALYSURF.fill(white)
	pygame.draw.line(DISPLAYSURF,Blue,(120,60),(60,120))
#  //optional lines below
	pygame.draw.circle(DISPLAYSURF,Blue,(120,60),(60,120))  //after display surf color and coordinated are there
	pygame.draw.ellipse(DISPLAYSURF,Blue,(120,60),(60,120))
	pygame.draw.rectangle(DISPLAYSURF,Blue,(120,60),(60,120))
	pygame.draw.polygone(DISPLAYSURF,Blue,(120,60),(60,120))
#  //optional end

	pixObj = pygame.PixelArray(DISPLAYSURF)
	pixObj[380][280] =Black
	pixObj[380][282] =Black

		del pixObj

#Run the game loop
	while True:
		for event in pygame.event.get():
			if event.type==QUIT:
				pygame.quit()
			sys.exit()
		pygame.display.update()

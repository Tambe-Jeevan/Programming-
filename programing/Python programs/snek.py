import turtle
import random
import time
delay=0.1
sc=0
hs=0
bodies=[]

#creating a screen
s=turtle.Screen()
s.title("Snake New Game")
s.bgcolor("pink")
s.setup(height=600,width=600)#creating a size of screen

#creating head
head=turtle.Turtle()
head.shape("triangle")
head.color("black")
head.fillcolor("red")
head.penup()
head.goto(0,0)
head.direction="stop"

#snake food
food=turtle.Turtle()
food.shape("circle")
food.color("white")
food.fillcolor("green")
food.penup()
food.ht()  #hide turtle
food.goto(150,200)
food.st()

#score board
sb=turtle.Turtle()
sb.ht()
sb.penup()
sb.goto(-280,280)
sb.write("Score:0|Highest Score:0")   #to print score board


def moveup():
    if head.direction!="down":
       head.direction="up"

def movedown():
    if head.direction!="up":
       head.direction="down"

def moveleft():
    if head.direction!="right":
       head.direction="left"

def moveright():
    if head.direction!="left":
       head.direction="right"

def movestop():
    head.direction="stop"

def move():
  if head.direction=="up":
    y=head.ycor()
    head.sety(y+20)

  if head.direction=="down":
    y=head.ycor()
    head.sety(y-20)

  if head.direction=="left":
    x=head.xcor()
    head.setx(x-20)

  if head.direction=="right":
     x=head.xcor()
     head.setx(x+20)


#event handline -key mappings
s.listen()
s.onkey(moveup,"Up")
s.onkey(movedown,"Down")
s.onkey(moveleft,"Left")
s.onkey(moveright,"Right")
s.onkey(movestop,"space")

#mainloop
while True:
    s.update()  #to update the screen
    #check collision border
    if head.xcor()>290:
       head.setx(-290)

    if head.xcor()<-290:
       head.setx(290)

    if head.ycor()>290:
       head.sety(-290)

    if head.ycor()<-290:
       head.sety(290)


    #check collision with food
if head.distance(food)<20:
       x=random.randint(-290,290)
       y=random.randint(-290,290)
       food.goto(x,y)
       #increase the body of snake
       body=turtle.Turtle()
       body.speed(0)
       body.penup()
       body.shape("square")
       body.color("red")
       bodies.append(body)  #append the new body in list

       sc=sc+100            #increase the score
       delay=delay-0.1    #increse the speed

       if sc>hs:
          hs=sc             #update highest score
       sb.clear()
       sb.write("Score:{}    |   Highest Score:{}".format(sc,hs))

    #move snake bodies
for i in range(len(bodies)-1,0,-1):
       x=bodies[i-1].xcor()
       y=bodies[i-1].ycor()
       bodies[i].goto(x,y)
if len(bodies)>0:
        x=head.xcor()
        y=head.ycor()
        bodies[0].goto(x,y)
        move()


#check collision with snake body--
for body in bodies:
   if body.distance(head)<20:
      time.sleep(1)
      head.goto(0,0)
      head.direction="stop"
      #hide body
      for body in bodies:
         body.ht()
      bodies.clear()
      sc=()
      delay=0.1
      sb.clear()
      sb.write("Score:{}   |   Highest Score:{}".format(sc,hs))
time.sleep(delay)
s.mainloop()

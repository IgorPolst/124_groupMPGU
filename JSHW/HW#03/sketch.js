function setup()
{
	//create a canvas for the robot
	createCanvas(1000, 2000);
}

function draw()
{
    //robot head
    fill("lightgray")
    ellipse(300,325,150,150)
    fill("coral")
    quad(250,325,260,315,270,325,260,330)
    quad(320,325,330,315,340,325,330,330)
    //robot body
    fill("lightsteelblue")
    triangle(150,400,450,400,300,800)
    
    //robot arm
    fill("lightblue")
    ellipse(133,722,50,50)
    ellipse(465,722,50,50)
    fill("silver")
    triangle(150,400,165,750,100,705 )
    triangle(450,400,435,750,500,705)
   
    // shoulders
    fill("gainsboro")
    ellipse(150,410,50,50)
    ellipse(450,410,50,50)
    
    //robot hips
    fill("silver")
    quad(240,720,360,720,400,800,200,800)
   
    //robot leg
    fill("darkgray")
    triangle(230,800,282,800,220,1100)
    triangle(370,800,320,800,360,1100)
    fill("gray")
    ellipse(218,1085,30,30)
    ellipse(362,1085,30,30)
    
}
function setup()
{
	//create a canvas for the robot
	createCanvas(1000, 2000);
    fill(255,255,255);
}

function draw()
{
    background(0,0,0);
    
    
    ellipse(mouseX,mouseY,100,100);
    // ellipse(width/2, height/2, width,height);
    
}

function mousePressed()
{
    fill(255,0,0);
}
function keyPressed(){
    fill(0,255,0)
}
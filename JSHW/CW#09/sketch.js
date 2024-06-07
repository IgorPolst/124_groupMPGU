//var maxDist;
let pos;
let vel; 

function setup() {
	createCanvas(500, 500);
//	maxDist = dist(0,0, width/2,height/2);
//	console.log(maxDist);
	pos = createVector(50,100);
	vel = createVector(0,-1);
}

function draw() {
	background(200);
	noStroke();
	
	pos.add(vel);
	
	if (pos.y < 0){
		pos.y = 100;
		
		
	}
	strokeWeight (5);
	point(pos);
	
//	for ( let j = 0; j < 40; j++) {
//		for (let i = 0; i < 40; i++) {
//			let d  = dist(mouseX, mouseY, 50 + i*30, 50+j *30);
//			let r = d/maxDist;
//			fill("red");
//			ellipse(50+i *30, 50+j *30, r*30, r*30);
//
//		}
//	}

}

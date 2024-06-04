function setup() {
	createCanvas(800,800);
	function MyConstruct(x, y, str) {
		this.x = x;
		this.y = y;
		this.str = str;
		this.display = function(){
			text(this.str, this.x,this.y);
		}
		return this;

	};
	obj1 = new MyConstruct(width/2, height/2, "Hello");
	obj2 = new MyConstruct(width/3, height/3, "Bye");
	console.log(obj1);
	console.log(obj2);
	
}
function draw(){
	background(220);
	obj1.display();
	obj2.display();
}
//week08_4_bubble_balloon
//用mouse吹氣球
void setup(){
  size(400,400);//大小
}
int x,y,s;//氣球的座標 和大小
void draw(){
  background(255);//白色背景
  ellipse(x,y-s/2,s*0.7,s);//氣球形狀
  if(mousePressed) s++;
  else{
    if(y>s)y-=2;
  }
}
void mousePressed(){
  x=mouseX;
  y=mouseY;
  s=1;
}

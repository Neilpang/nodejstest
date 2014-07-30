

var sign=require('./build/Release/obj.target/sign.node')

if(sign.test()) {
  console.log("Error");
} else {
  console.log("Success");
}
function transformFirstAndLast(array) {
  //your code here
  var key=array[0];
  var value=array[array.length-1];
  var obj = {};
  obj[key]=value;
  return obj
}
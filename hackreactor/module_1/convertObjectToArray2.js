function listAllValues(obj) {
  // your code here
  var ans=[];
  for(var i in obj){
    ans.push(obj[i]);
  }
  return obj;

}

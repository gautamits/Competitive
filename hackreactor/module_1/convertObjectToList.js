function getAllKeys(obj){
  ans=[];
  for (var i in obj){
    ans.push(i.toString());
  }
  return ans;
}
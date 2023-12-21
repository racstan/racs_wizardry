let arr=[1,2,3,4,5];
let val= 4;
function binarySearch(arr,val,start=0,end=arr.length-1){
if(start>end){
    return -1;
}
const mid= Math.floor((start+end)/2);
if(arr[mid]===val){
    return mid;
}
if(arr[mid]<val){
    return binarySearch(arr,val,mid+1,end);
}
if(arr[mid]>val){
    return binarySearch(arr,val,start,mid-1);
}
}

let result = binarySearch(arr,val);
console.log(result)
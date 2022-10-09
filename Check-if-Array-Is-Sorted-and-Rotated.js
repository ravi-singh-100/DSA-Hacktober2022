
function ifArraySortedAndRotated(arr){
    //Approach : Go from left to right check for inc order and then dec pattern 
    
    let k =0,index,smallest=arr[0];
    
    for (index = 0; index < arr.length; index++) {
        let nextIndex =index+1;
        if( nextIndex <arr.length && arr[index]<=arr[index+1]){
            if(smallest>arr[index])smallest=arr[index];
            continue;
        
        }else if(nextIndex <arr.length && arr[index]>arr[index+1]){
            k=index;   
            break;
        }
    }
    
    if(!k && (index==arr.length) && smallest<=arr[index-1]) return true;
    
    for (let index = k+1; index < arr.length; index++) {
            
        if( (index+1) <arr.length &&  arr[index]<=arr[index+1] && arr[index]<=smallest){
            continue;
        }
        return (index+1 == arr.length &&arr[index]<=smallest) ? true:false;
    }
  return true;
}

let arr  =[2,4,1,3]
console.log(ifArraySortedAndRotated(arr))

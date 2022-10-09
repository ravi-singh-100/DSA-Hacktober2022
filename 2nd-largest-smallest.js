
function find2ndLargestSmallest(arr){

    //find first largest and smallest then skip that index for 2nd largest and smallest value
    let firstLargestIndex = 0,
        firstSmallestIndex = 0,
        firstLargestValue =Number.MIN_VALUE,
        firstSmallestValue =Number.MAX_VALUE,
        secLargestValue =Number.MIN_VALUE,
        secSmallestValue =Number.MAX_VALUE;

        for (let index = 0; index < arr.length; index++) {

            if(arr[index]>firstLargestValue){
                firstLargestValue = arr[index];
                firstLargestIndex = index;
            }

            if(arr[index]<firstSmallestValue){
                firstSmallestValue = arr[index];
                firstSmallestIndex = index;
            }
        }
        for (let index = 0; index < arr.length; index++) {

            if(arr[index]>secLargestValue && arr[index]!=firstLargestValue  && index!=firstLargestIndex){
                secLargestValue = arr[index];
            }

            if(arr[index]<secSmallestValue && arr[index]!=firstLargestValue && index!=firstSmallestIndex){
                secSmallestValue = arr[index];
            }
        }

        return {secLargestValue,secSmallestValue};

}

function driverFunction(){

    const arr = [1,2,4,7,7,5];
    const result = find2ndLargestSmallest(arr);
    console.log(result);
}

driverFunction();

int countingValleys(int steps, string path) {
int left=0;
int counter = 0;
int numberOfvalleys = 0;
while(left < path.length()){
if(path[left]=='D'){

counter-=1;

     
}else{
    counter+=1;
    if(counter==0){
       numberOfvalleys++;
}
}

left++;    
}
if(counter < 0 ){
    numberOfvalleys = 1;
}
return numberOfvalleys;  
}

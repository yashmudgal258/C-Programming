int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    int final_time= arrivalTime + delayedTime;
    return final_time%24;
}    
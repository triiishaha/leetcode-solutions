int numWaterBottles(int numBottles, int numExchange) {
    int drunkBottles , emptyBottles;
    emptyBottles = numBottles;
    drunkBottles = numBottles;
    numBottles = 0;

    while (emptyBottles >= numExchange)
    {
       numBottles = emptyBottles / numExchange;
       emptyBottles = emptyBottles % numExchange;
       emptyBottles = emptyBottles + numBottles;
       drunkBottles = drunkBottles + numBottles;
    }
    
    return drunkBottles;
    
}

struct cmp{
    bool operator()(pair<int,string> a,pair<int,string> b) const{
        if(a.first > b.first) return 1;
        if(a.first < b.first) return 0;
        return (a.second < b.second);
    }
};
class FoodRatings {
public:
    unordered_map<string,set<pair<int,string>,cmp>> cuisineToRatingAndFood;
    unordered_map<string,pair<string,int>> foodToCuisineAndRating;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n = foods.size();
        for(int i=0;i<n;i++){
            foodToCuisineAndRating[foods[i]] = {cuisines[i],ratings[i]};
            cuisineToRatingAndFood[cuisines[i]].insert({ratings[i],foods[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        string cuisine = foodToCuisineAndRating[food].first;
        int oldRating = foodToCuisineAndRating[food].second;
        foodToCuisineAndRating[food] = {cuisine,newRating};
        cuisineToRatingAndFood[cuisine].erase({oldRating,food});
        cuisineToRatingAndFood[cuisine].insert({newRating,food});
    }
    
    string highestRated(string cuisine) {
        auto it = *cuisineToRatingAndFood[cuisine].begin();
        return it.second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */

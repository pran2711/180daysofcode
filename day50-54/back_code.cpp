Q1. Defanging of ip => Leetcode

class Solution {
public:
    string defangIPaddr(string address) {
        int index = 0;
        string ans;

        while( index < address.size()){
            if(address[index] == '.')
            ans = ans + "[.]";
            else
            ans = ans + address[index];

            index++;
        }
        return ans;

    }
};



// Q2.  Check if the Sentence Is Pangram

class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool>alpha(26,0);

        for(int i = 0; i < sentence.size();i++){
            alpha[sentence[i] - 'a']=1;
        }

        for(int i =0; i < 26; i++){
            if(alpha[i] == 0)
            return 0;
        }

        return 1;
    }
};

// Q3. Find longest palindrome
class Solution {
public:
    int longestPalindrome(string s) {
        
        vector<int>lower(26,0);
        vector<int>upper(26,0);

        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'a')
            lower[s[i] - 'a']++;
            else
            upper[s[i] - 'A']++;
        }

        int count = 0;
        bool odd = 0;

        for(int i = 0; i < 26; i++){
           if(lower[i]%2 ==0)
           count += lower[i];
           else{
               count += lower[i] - 1;
               odd = 1;
           }

           if(upper[i]%2 ==0)
           count += upper[i];
           else{
               count += upper[i] - 1;
               odd = 1;
           }
        }

        return count+odd;
    }
};

// Q4. Sorting the Sentence

class Solution {
public:
    string sortSentence(string s) {
        vector<string>str(10);
        string temp;
        int count=0,index=0;

        while(index < s.size()){
            if(s[index] == ' '){
              int pos = temp[temp.size()-1] - '0';
              temp.pop_back();
              str[pos] = temp;
              temp.clear();
              count++;
            }
            else{
                temp+=s[index];
            }
            index++;
        }

        int pos = temp[temp.size()-1] - '0';
        temp.pop_back();
        str[pos] = temp;
        temp.clear();
        count++;

        for(int i =1;i <= count;i++){
            temp+=str[i];
            temp+=' ';
        }

        temp.pop_back();
        return temp;
    }
};

// Q5.  Sort Vowels in a String

class Solution {
public:
    string sortVowels(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        string vowel;

        for(int i =0;i < s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'|| s[i] == 'u'){
                lower[s[i] - 'a']++;
                s[i] = '#';
            }

            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O'|| s[i] == 'U'){
                upper[s[i] - 'A']++;
                s[i] = '#';
            }
        }

        for(int i =0;i <26;i++){
            char c = 'A' +i;
            while(upper[i]){
               vowel+=c;
               upper[i]--;
            }
        }

        for(int i =0;i <26;i++){
            char c = 'a' +i;
            while(lower[i]){
               vowel+=c;
               lower[i]--;
            }
        }

        int first =0,second=0;

        while(second < vowel.size()){
            if(s[first] == '#'){
                s[first] = vowel[second];
                second++;
            }

            first++;
        }

        return s;

    }
};


// Q6 Add Strings

class Solution {
public:
    string addStrings(string num1, string num2) {
        if(num1.size() >= num2.size()){
           return sum(num1,num2);
        }else{
           return sum(num2,num1);
        }
    }

    string sum(string num1, string num2) {
        int index1 = num1.size()-1,  index2 = num2.size()-1;
        string ans;

        int carry = 0, sum;

        while(index2 >= 0){
            sum = (num1[index1] - '0') + (num2[index2] - '0') + carry;

            carry = sum/10;
            char c = '0' + sum%10;
            ans+=c;
            index2--,index1--;
        }

        while(index1 >= 0){
              sum = (num1[index1] - '0') + carry;

            carry = sum/10;
            char c = '0' + sum%10;
            ans+=c;
            index1--;
        }
        if(carry)
        ans+='1';

        reverse(ans.begin(),ans.end());

        return ans;

    }
};


// Q7 Factorials of large numbers

class Solution {
public:
    vector<int> factorial(int N){
    vector<int>ans(1,1);
        while(N > 1){
            int carry =0, res, size = ans.size();
            
            for(int i =0; i < size; i++){
                res = ans[i] * N + carry;
                carry = res/10;
                ans[i] = res%10;
            }
            
            while(carry){
            ans.push_back(carry%10);
            carry/=10;
            }
            
            N--;
        }
        
     reverse(ans.begin(),ans.end());
     return ans;
    }
};
#include <curl/curl.h>
#include <iostream>

using namespace std;

int main(){

CURL *curl;
CURLcode res;

curl = curl_easy_init();

if(curl) {
   curl_easy_setopt(curl, CURLOPT_URL, "http://localhost:8888/");
   curl_easy_setopt(curl, CURLOPT_POST, 1);
   curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "name=someone&comment=pdata");
res = curl_easy_perform(curl);
curl_easy_cleanup(curl);

cout << endl;
}
return 0;
}

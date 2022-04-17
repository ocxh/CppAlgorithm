//vector초기화
vector<int> v[10];
vector<int> v(n, 0); //0이라는 값을 가진 n개의 벡터 생성

//배열로 2차원 배열 매트릭스 생성 
vector<vector<int>> checked;
vector<vector<int>>v(n+1, vector<int>(n+1, 0));

//fill로 초기화
fill(v.begin(), v.end(), 0);

//부분 초기화
int a[n] = {0, 1};

//memset을 이용한 초기화 
memset(check, 0, sizeof(check));

//fill을 사용한 2차원 배열 초기화
for(int i=0; i<10; i++) fill(dp[i], dp[i]+10, 0);
fill(&arr[0][0], &arr[0][0] + n*m, k); 
 

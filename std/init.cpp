//vector�ʱ�ȭ
vector<int> v[10];
vector<int> v(n, 0); //0�̶�� ���� ���� n���� ���� ����

//�迭�� 2���� �迭 ��Ʈ���� ���� 
vector<vector<int>> checked;
vector<vector<int>>v(n+1, vector<int>(n+1, 0));

//fill�� �ʱ�ȭ
fill(v.begin(), v.end(), 0);

//�κ� �ʱ�ȭ
int a[n] = {0, 1};

//memset�� �̿��� �ʱ�ȭ 
memset(check, 0, sizeof(check));

//fill�� ����� 2���� �迭 �ʱ�ȭ
for(int i=0; i<10; i++) fill(dp[i], dp[i]+10, 0);
fill(&arr[0][0], &arr[0][0] + n*m, k); 
 

int getParent[N];

void traverseTree(vector<vector<int>>& tree, int parent) {

	for (int& child : tree[parent]) {

		traverseTree(tree, child);
	}
}

void solve(){
	int n; cin >> n;
	vector<vector<int>> tree(n + 1);

	int root = 1;

	for (int i = 1;i <= n;i++) {
		int parent, child = i;
		cin >> parent;

		if (parent == child) root = parent;

		getParent[child] = parent != child ? parent : -1;

		if (parent != child)
			tree[parent].push_back(child);
	}
  

	traverseTree(tree, root);
	
}

class Solution {
public:
	const int N = 1e5;
	vector<vector<int>> edges, rEdges;
	vector<bool> visited;
	vector<int> color;
	vector<bool> s;
	int n;

	void dfs2(int root) {
		s[root] = 1;

		for (auto &child : edges[root]) {
			if (color[child] == 1 && s[child] == 0) dfs2(child);
		}

		return;
	}

	void dfs(int root) {
		color[root] = 1; //On recursion
		for (auto &child : edges[root]) {
			if (color[child] == 2) continue;
			if (color[child] == 1) {
				dfs2(child);
			} else {
				dfs(child);
			}
		}

		color[root] = 2;
		return;
	}

	void dfs3(int root) {
		s[root] = 1;

		visited[root] = 1;
		for (auto&child : rEdges[root]) {
			if (!visited[child]) dfs3(child);
		}

		return;
	}

	vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
		n = graph.size();
		edges = graph;
		visited.resize(n, 0);
		rEdges.resize(n);
		s.resize(N, 0);

		color.resize(n, 0);
		for (int i = 0; i < n; ++i) {
			if (color[i] == 0) dfs(i);
		}

		for (int i = 0; i < n; ++i) {
			for (auto &end : edges[i]) {
				rEdges[end].push_back(i);
			}
		}

		for (int i = 0; i < n; ++i) {
			if (!visited[i] && s[i] == 1) dfs3(i);
		}

		vector<int> ans;
		for (int i = 0; i < n; ++i) {
			if (s[i] == 0) ans.push_back(i);
		}

		return ans;
	}
};
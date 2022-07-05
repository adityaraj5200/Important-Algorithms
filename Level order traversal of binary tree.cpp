/* Following is the code for level order traversal of a binary tree */
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int sz = q.size();
        while(sz--){
            Node* node = q.front();
            q.pop();
            
            // cout<<node->data<<' ';
          
            if(node->left){
                q.push(node);
            }
            if(node->right){
                q.push(node);
            }
        }
    }

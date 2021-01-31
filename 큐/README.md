# Queue
# 큐

<br/>
<br/>

### 1. 큐

* 뒤쪽으로 들어가서 앞쪽으로 나오는 자료구조이다.

* 스케줄링, 탐색 알고리즘 등 다방면으로 활용된다.

* 배열과 연결 리스트로 구현이 가능하다.


<br/>

### 2. 큐 삽입 과정

**1.** 뒤에 삽입할 노드를 준비한다.

**2.** Rear가 가리키고 있는 노드의 next가 삽입할 노드를 가리키게 한다.

<img src=https://user-images.githubusercontent.com/78206106/106382478-3f9f0e00-6403-11eb-8664-dbfaecae2684.PNG>

**3.** Rear가 삽입할 노드를 가리키게 한다.

<img src=https://user-images.githubusercontent.com/78206106/106382479-40d03b00-6403-11eb-9f0f-53a77be41cf3.PNG>

<br/>

### 3. 큐 추출 과정

**1.** 맨 앞에 삭제할 노드가 있다.

<img src=https://user-images.githubusercontent.com/78206106/106382482-4299fe80-6403-11eb-92a9-3c228fbadbb7.PNG>

**2.** Front가 삭제할 노드의 뒤 노드를 가리키게 한다.

**3.** 삭제할 노드의 메모리를 할당 해제한다.

<img src=https://user-images.githubusercontent.com/78206106/106382484-43cb2b80-6403-11eb-83f1-e63df1389eb9.PNG>

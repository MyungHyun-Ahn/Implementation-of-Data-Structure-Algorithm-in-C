# Stack
# 스택

<br/>
<br/>

### 1. 스택이란

<br/>

* 한쪽으로 들어가서 한쪽으로 나오는 자료구조이다.
* 제한된 용량을 가지도록 구현된다.
* 스택이 가득 찼을 때 새로운 요소를 추가하려고 하면 오버플로우 상태로 간주된다.
* 스택이 비게 되면 언더플로우 상태가 된다.
* 배열과 연결리스트로 구현이 가능하다.

<br/>


### 2. 스택의 삽입 과정

<br/>

**1.** 삽입할 노드가 있다.


<img src="https://user-images.githubusercontent.com/78206106/106376244-c2f63a80-63d6-11eb-8100-cc0cab283985.PNG">


**2.** 삽입할 노드의 next가 top(스택의 최상단 노드)를 가리키게 한다.

**3.** 삽입한 노드가 top이 된다.


<img src="https://user-images.githubusercontent.com/78206106/106376181-12883680-63d6-11eb-82fc-c6e9e8651677.PNG">

<br/>


### 3. 스택의 추출 과정

<br/>


**1.** 항상 스택은 최상단 노드에서 추출이 이루어지기 때문에 첫번째 노드(top)를 추출한다.


<img src="https://user-images.githubusercontent.com/78206106/106376290-38faa180-63d7-11eb-8df2-d71fea7ae40c.PNG">


**2.** 두번째 노드가 top이 되도록 한다.

**3.** 삭제할 노드(첫번째 노드)를 할당해제 해준다.

**4.** 그 데이터 값을 리턴(return)해준다.


<img src="https://user-images.githubusercontent.com/78206106/106376291-3a2bce80-63d7-11eb-9673-321c125501a0.PNG">

<br/>

# Linked List

# 연결 리스트

<br/>
<br/>

### 1. 연결 리스트란

<br/>


* 배열은 크기가 클 경우, 메모리 공간을 너무 많이 요구하며, 자료의 삽입 및 삭제가 번거롭다. 이를 해결할 수 있는 자료구조가 연결 리스트이다.

* 연결 리스트는 리스트의 중간 지점에 노드를 추가하거나 삭제할 수 있어야 한다.

* 필요할 때마다 메모리 공간을 할당 받는다.

<br/>


### 2. 단일 연결 리스트

<br/>

* 포인터를 이용해 단방향적으로 다음 노드를 가리킨다.

* 일반적으로 연결 리스트의 시작 노드를 헤드(Head)라고 하며 별도로 관리한다.

* 다음 노드가 없는 끝 노드의 다음 위치 값으로는 NULL을 넣는다.

<img src="https://user-images.githubusercontent.com/78206106/106376323-94c52a80-63d7-11eb-9ce1-b7993bc6b589.PNG">

<br/>

### 3. 단일 연결 리스트의 삽입

<br/>

**1.** 삽입할 노드가 있다.

<img src="https://user-images.githubusercontent.com/78206106/106376631-7ca2da80-63da-11eb-84ce-09ea1ee7a636.PNG">

**2.** 삽입할 노드의 next가 삽입할 노드의 다음 노드를 가리키게 한다.

**3.** 삽입할 노드의 전 노드의 next가 삽입할 노드를 가리키게 한다.

<img src="https://user-images.githubusercontent.com/78206106/106376638-8b898d00-63da-11eb-9e22-b96b0a6f3ccc.PNG">

<br/>

### 4. 단일 연결 리스트의 삭제

<br/>

**1.** 삭제할 노드가 있다.

<img src="https://user-images.githubusercontent.com/78206106/106376984-13709680-63dd-11eb-8222-78185f6ba9b2.PNG">

**2.** 삭제할 전 노드의 next가 삭제할 노드의 다음 노드를 가리키게 한다.

**3.** 삭제할 노드를 메모리 할당을 해제한다.

<img src="https://user-images.githubusercontent.com/78206106/106376985-15d2f080-63dd-11eb-9089-2731a8da18fd.PNG">

<br/>





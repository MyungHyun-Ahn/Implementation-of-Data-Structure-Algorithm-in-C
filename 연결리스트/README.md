# Linked List

# 연결 리스트

<br/>
<br/>

### 1. 연결 리스트란

<br/>


* 배열은 크기가 클 경우, 메모리 공간을 너무 많이 요구하며, 자료의 삽입 및 삭제가 번거롭다. 이를 해결할 수 있는 자료구조가 연결 리스트이다.

* 연결 리스트는 리스트의 중간 지점에 노드를 추가하거나 삭제할 수 있어야 한다.

* 필요할 때마다 메모리 공간을 할당 받는다.

* 포인터와 구조체로 구현이 가능하다.

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

**3.** 삭제할 노드의 메모리를 할당 해제한다.

<img src="https://user-images.githubusercontent.com/78206106/106376985-15d2f080-63dd-11eb-9089-2731a8da18fd.PNG">

<br/>

### 5. 양방향 연결 리스트

<br/>

* 머리(Head)와 꼬리(Tail)를 모두 가진다.
* 각 노드는 앞 노드와 뒷 노드의 정보를 모두 저장하고 있다.
* 구조체와 포인터로 구현이 가능하다.
* 삽입 및 삭제 기능에서 예외 사항을 처리할 필요가 있다.
* 더 이상 삭제할 원소가 없는데 삭제하는 경우 등을 체크하여야 한다.

<img src="https://user-images.githubusercontent.com/78206106/106377327-c3470380-63df-11eb-8afc-a1d831f2b4eb.PNG">

<br/>

### 6. 양방향 연결 리스트의 삽입

<br/>


**1.** 삽입할 노드가 있다.

<img src="https://user-images.githubusercontent.com/78206106/106377329-c5a95d80-63df-11eb-9daf-2edcf451ce43.PNG">

**2.** 삽입할 노드의 전 노드의 next가 삽입할 노드의 prev를 가리키게 하고 삽입할 노드의 prev가 전 노드의 next를 가리키게 한다.

**3.** 삽입할 노드의 다음 노드의 prev가 삽입할 노드의 next를 가리키게 하고 삽입할 노드의 next가 다음 노드의 prev를 가리키게 한다.

<img src="https://user-images.githubusercontent.com/78206106/106377330-c7732100-63df-11eb-9f12-c54701874ece.PNG">

<br/>

### 7. 양방향 연결 리스트의 삭제

<br/>

**1.** 삭제할 노드가 있다.

<img src="https://user-images.githubusercontent.com/78206106/106377334-c93ce480-63df-11eb-843c-4780f01aad43.PNG">

**2.** 삭제할 노드의 전 노드의 next가 삭제할 노드의 다음 노드의 prev를 가리키게 한다.

**3.** 삭제할 노드의 다음 노드의 prev가 삭제할 노드의 전 노드의 next를 가리키게 한다.

**4.** 삭제할 노드의 메모리를 할당 해제한다.

<img src="https://user-images.githubusercontent.com/78206106/106377335-ca6e1180-63df-11eb-823b-f14221cf1252.PNG">

<br/>





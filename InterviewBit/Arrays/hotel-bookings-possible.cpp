bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {

    int count = 1;

	int depCount = 0;



	sort(arrive.begin(), arrive.end());

	sort(depart.begin(), depart.end());



	int temp = depart[0];



	for (int i = 1; i < arrive.size(); i++) {

		if (arrive[i] < temp) {

			count++;

			if (count > K) {

				return false;

			}

		} else {

			count++;

			while (temp <= arrive[i]) {

				depCount++;

				temp = depart[depCount];

				count--;

			}

		}

	}



	if (count > K) {

		return false;

	} else {

		return true;

}

}

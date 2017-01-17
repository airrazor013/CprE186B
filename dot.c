double dot(double a[], double b[], int length) {
	int i=0;
	double sum=0;  
	double returnVal;
	for (i=0; i<length; i++) { 
		sum = sum + (a[i] * b[i]);
		}
		returnVal=sum;
		sum=0;
	return returnVal;
	}
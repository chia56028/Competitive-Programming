class Sorting{
	public static int[] exchangeSort(int arr[]){
		int temp;
		for(int i=0; i<arr.length; i++){
			for(int j=i+1; j<arr.length; j++){
				if(arr[j]<arr[i]){
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		return  arr;
	}

	public static int[] selectionSort(int arr[]){
		int temp;
		int min,n;
		for(int i=0; i<arr.length; i++){
			min=arr[i];
			n=i;
			for(int j=i+1; j<arr.length; j++){
				if(arr[j]<min){
					min=arr[j];
					n=j;
				}
			}
			if(n!=i){
				temp=arr[i];
				arr[i]=arr[n];
				arr[n]=temp;
			}
		}
		return arr;
	}

	public static int[] insertionSort(int arr[]){
		int temp;
		for(int i=0; i<arr.length-1; i++){	
	        for(int j=i+1; j>0; j--){
	            if(arr[j-1]<=arr[j]) break;
	            temp = arr[j];
	            arr[j] = arr[j-1];
	            arr[j-1] = temp;
	        }
	    }
		return arr;
	}

	public static int[] bubbleSort(int arr[]){
		int temp;
		for(int i=0; i<arr.length-1; i++){
			for(int j=0; j<arr.length-i-1; j++){
				if(arr[j]>arr[j+1]){
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
		return arr;
	}

	// public static int[] quickSort(int arr[]){
	// 	int right, left;
	// 	int temp;
	// 	for(int i=0; i<arr.length; i++){

	// 	}
	// 	return arr;
	// }
}

public class SortingAlgorithm{
	public static void main(String args[]){
		int a[]={9,8,7,6,5,4,3,2,1,0};
		System.out.println("exchangeSort:");
		show(Sorting.exchangeSort(a));

		int b[]={9,8,7,6,5,4,3,2,1,0};
		System.out.println("selectionSort:");
		show(Sorting.selectionSort(b));

		int c[]={9,8,7,6,5,4,3,2,1,0};
		System.out.println("insertionSort:");
		show(Sorting.insertionSort(c));

		int d[]={9,8,7,6,5,4,3,2,1,0};
		System.out.println("bubbleSort:");
		show(Sorting.bubbleSort(d));


		// int e[]={9,8,7,6,5,4,3,2,1,0};
		// System.out.println("quickSort:");
		// show(Sorting.quickSort(e));		
	}

	public static void show(int array[]){
		for(int i=0; i<array.length; i++){
			System.out.print(array[i]+" ");
		}
		System.out.println();
	}
}
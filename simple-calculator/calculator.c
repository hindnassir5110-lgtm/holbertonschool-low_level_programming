if (choice == 1)
{
	printf("A: ");
	scanf("%d", &a);

	printf("B: ");
	scanf("%d", &b);

	printf("Result: %d\n", a + b);
}
else if (choice == 2)
{
	printf("A: ");
	scanf("%d", &a);

	printf("B: ");
	scanf("%d", &b);

	printf("Result: %d\n", a - b);
}
else if (choice != 0 && (choice < 1 || choice > 4))
{
	printf("Invalid choice\n");
}

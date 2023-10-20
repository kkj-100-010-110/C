void print_part(struct part p)
{
	printf("Part number: %d\n", p.number);
	printf("Part name: %d\n", p.name);
	printf("Quantity on hand: %d\n", p.on_hand);
}

void print_part(struct part *p)
{
	printf("Part number: %d\n", p->number);
	printf("Part name: %d\n", p->name);
	printf("Quantity on hand: %d\n", p->on_hand);
}

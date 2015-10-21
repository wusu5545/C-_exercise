int main(){
	int i = -1;
	int const ci = i;
	int i2 = ci;
	int & ri = ci;
	int const & rci = &ci;
	int const * pci = &i;
	int * const cpi = &ci;
	int const * const & rcpci = pci;
	int const * const cpci = &ci;
	int const & rci2 = *cpci;
	int const & icr3 = *cpi;
	int i3 = rci2;
	return 0;
}

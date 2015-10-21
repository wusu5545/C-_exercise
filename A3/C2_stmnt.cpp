//a
switch( ival ) {
	case 1:
		int ix = get_value();
		ivec[ ix ] = ival;
		break;
	default:
		ix = ivec.size()-1;
		ivec[ ix ] = ival;
}
//b
switch( ival ) {
	case ’a’: aCnt++;
	case ’e’: eCnt++;
	default: iouCnt++;
}
//c
switch( ival ) {
	case 1, 3, 5, 7, 9:
		oddcnt++;
		break;
	case 2, 4, 6, 8, 10:
		evencnt++;
		break;
}
//d
int ival=512;
int jval=1024;
int kval=4096;
int bufsize;
// ...
switch( swt ) {
	case ival:
		bufsize = ival*sizeof(int);
		break;
	case jval:
		bufsize = jval*sizeof(int);
		break;
	case kval:
		bufsize = kval*sizeof(int);
		break;
}

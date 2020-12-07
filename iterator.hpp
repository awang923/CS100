class Iterator{
private:
	int row;
	int column;
public:
	int getRow(){return row;}
	int getColumn(){return column;}
	void next(){
		if(column == 9 && row == 9){
			return;
		}
		else if(row == 9){
			column++;
			row = 0;
		}
		else{
			row++;
		} 
	}     
};

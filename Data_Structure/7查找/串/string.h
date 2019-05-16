#ifndef STRING_H_
#define STRING_H_
//
//	实现一个串  Create by W A G 
//
class String{
	private:
		char *ch;
		int length;
	public:
		
		String(const char * str = NULL){
			if(!str){
				ch = new char[1];
				length = 0;
				*ch = '\0';
			}
			else{
				int i=0;
				while(str[i]!='\0'){
					i++;
				}
				
				ch = new char[i+1];
				for(int j=0;j<i+1;j++){
					ch[j] = str[j];
				}
				ch[i] = '\0';
				this->length = i;
			}
		}
		
		String(String &s){
			length = s.length;
			ch = new char[length+1];
			for(int i=0;i<s.length;i++){
				ch[i] = s.ch[i];
			}
			ch[length] = '\0';
		}
		
		~String(){
			delete [] ch;
		}
		
		bool operator==(const String& compare) const{
			if(this->length!=compare.length) return false;
			
			for(int i=0;i<this->length;i++){
				if(this->ch[i]!=compare.ch[i]) return false;
			}
			
			return true;
		}
		
		String &operator=(const String &str){
			if(*this == str) return *this;
			
			delete [] ch;
			this->length = str.length;
			this->ch = new char[length+1];
			
			for(int i=0;i<length;i++){
				this->ch[i] = str.ch[i];
			}
			this[length] = '\0';
			
			return *this;
			
		}
		
		String &operator+(const String& s){
			String temp = *this;
			if(s==NULL) return *this;
			
			this->length = temp.length+s.length;
			delete [] this->ch;
			
			this->ch = new char[this->length+1];
			int i;
			for(i=0;i<temp.length;i++){
				this->ch[i] = temp.ch[i];
			}
			for(i=temp.length;i<temp.length+s.length;i++){
				this->ch[i] = s.ch[i];
			}
			this->ch[this->length] = '\0';
			
			return *this;
		}
		
		
		void display(){
			for(int j=0;j<length;j++){
				std::cout<<ch[j];
			}
		}

		int Index_KMP(const String &substring) const{
			int len = substring.length;
			int next[len];
			void get_next(substring,next);
		}

private:
		void get_next(String &s,int next[]){
			
		}
};



#endif

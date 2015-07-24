//Gli iteratori servono per scorrere le posizioni di qualsiasi oggetto
//esempio: categories e' un vecto<TString>

for(std::vector<TString>::const_iterator cat_itr = categories.begin(); cat_itr != categories.end(); cat_itr++){
  std::cout<<"check this "<<(*cat_itr)<<std::endl;
}

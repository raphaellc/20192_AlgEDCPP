#pragma once
#include <string>

using namespace std;

class Usuario
{
public:
	Usuario();
	~Usuario();

	void setId(int p_id);
	int getId();

	void setLogin(string p_login);
	string getLogin();

	void setSenha(string p_senha);
	string getSenha();

private:
	int id;
	string login, senha;
};


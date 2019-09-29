#include "Usuario.h"



Usuario::Usuario()
{
}


Usuario::~Usuario()
{
}

void Usuario::setId(int p_id)
{
	id = p_id;
}

int Usuario::getId()
{
	return id;
}

void Usuario::setLogin(string p_login)
{
	login = p_login;
}

string Usuario::getLogin()
{
	return login;
}

void Usuario::setSenha(string p_senha)
{
	senha = p_senha;
}

string Usuario::getSenha()
{
	return senha;
}

create table 'Departamento' (
'Id_departamento' integer AUTOINCREMENT PRIMARY KEY, 'Nome_departamento' varchar(80)
);

create table 'Funcionario' (
'Id_funcionario' integer PRIMARY KEY AUTOINCREMENT, 'Nome_funcionario' varchar(80) NOT NULL, 'Fone_funcionario' integer NOT NULL
);

ALTER TABLE 'Funcionario' ADD CONSTRAINT 'fk_departamento' FOREIGN KEY ('Id_departamento') REFERENCES 'Departamento' ('Id_departamento');

SELECT Departamento.Nome_departamento, Funcionario.Nome_funcionario FROM Departamento, Funcionario WHERE Departamento.Id_departamento = Funcionario.Id_departamento;
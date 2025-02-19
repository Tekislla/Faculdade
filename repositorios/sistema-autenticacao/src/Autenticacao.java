public class Autenticacao {

    static final String senhaCorreta = "boa tentativa, mas a senha não está aqui, apenas no arquivo compilado :)";

    public static void main(String[] args) {
        if (args.length != 2) {
            System.out.println("Uso: [aplicativo] [usuario] [senha]");
            return;
        }

        String usuario = args[0];
        String senha = args[1];

        if (autenticar(usuario, senha)) {
            System.out.println("Acesso concedido");
        } else {
            System.out.println("Usuario ou senha invalidos");
        }
    }

    public static boolean autenticar(String usuario, String senha) {
        if (!usuario.equals("administrador")) {
            return false;
        }

        return senha.equals(senhaCorreta);
    }
}

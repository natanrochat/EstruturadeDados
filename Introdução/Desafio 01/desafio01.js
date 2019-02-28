var totItem = 0;

function criar(){

    totItem++; // Contador para administrar as multiplas IDs

    // --- ESCREVER O ITEM ---

    // armazenar o que o usuario digitou
    var texto = document.getElementById("digitar").value;

    // cria um texto que foi digitado no input com a variavel acima
    var cont = document.createTextNode(texto);

    // cria um elemento span
    var spn = document.createElement("span");

    // adiciona um id para cada elemento no span
    spn.id = "spnId" + totItem;

    // cria um elemento li
    var novoElemento = document.createElement("li");

    // adiciona um id para cada elemento na li
    novoElemento.id = "liId" + totItem;

    // adiciona uma class para a li no geral (para facilitar no css)
    novoElemento.className = "textoDesign";

    // acrescenta o texto de cont no span
    spn.appendChild(cont);

    spn.innerText = texto;

    // acrescenta o span na li
    novoElemento.appendChild(spn);

    // acrescenta a li na ol cujo id="itens"
    document.getElementById("itens").appendChild(novoElemento);



    // --- CHECK NO ITEM ---

    // cria um elemento input do tipo checkbox
    var feito = document.createElement("input");
    feito.type = "checkbox";

    // adicionar um id para cada elemento digitado do checkbox
    feito.id = "feitoId" + totItem;

    // adiciona uma class para a checkbox no geral (para facilitar no css)
    feito.className = "feitoDesign";
    

    // acrescenta a checkbox na li
    novoElemento.appendChild(feito);

    // efeito de marcar e tirar marcação da tarefa
    feito.onclick = function(){
        var marcarId = this.id.replace("feitoId", "");
        var marcarTexto = document.getElementById("liId" + marcarId);

        if(this.checked == true){
            marcarTexto.style.textDecoration =  "line-through";
            marcarTexto.style.fontStyle = "italic";
        }
        else{
            marcarTexto.style.textDecoration =  "none";
            marcarTexto.style.fontStyle = "normal";
        }      
    };


    // --- EXCLUIR ITEM ---

    // cria um elemento input do tipo button com o texto "Remover" dentro do button
    var deletar = document.createElement("input");
    deletar.type = "button";
    deletar.value = "Remover";

    // adicionar um id para cada elemento digitado do button
    deletar.id = "del" + totItem;

    // adiciona uma class para o botão "Remover" no geral (para facilitar no css)
    deletar.className = "deleteDesign";

    // acrescenta o botão remover na li
    novoElemento.appendChild(deletar);


    deletar.onclick = function(){

        // pegar o id da li para a exclusão/esconder tarefa
        var excId = this.id.replace("del", ""); // replace é basicamente procurar onde esta escrito ex: del e substituir pelo segundo paramentro, ou seja "",retirando o del
        document.getElementById("liId"+excId).style.display = "none";
    };


    // --- RENOMEAR ITEM --- AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

    // cria um elemento input do tipo button com o texto "Editar" dentro do button
    var renomear = document.createElement("input");
    renomear.type = "button";
    renomear.value = "Editar";

    // adicionar um id para cada elemento digitado do button
    renomear.id = "ren" + totItem;

    // adiciona uma class para o botão "Editar" no geral (para facilitar no css)
    renomear.className = "renomearDesign";

    // acrescentar o botão editar na li
    novoElemento.appendChild(renomear);

    renomear.onclick = function(){  
        novoNome = prompt("Digite o novo Item");
        spn.innerText = novoNome;
    };

}
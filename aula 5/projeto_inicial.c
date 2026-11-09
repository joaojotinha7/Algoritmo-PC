#include <stdio.h>
#include <math.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_CTYPE, "");

    // Entradas
    int qte_participantes, qte_jogadores_por_time, qte_computadores;
    float potencia, duracao, preco_kwh;
    float preco_kit, outros_custos, orcamento;

    // Processamento
    int qte_times, computadores_faltantes;
    float consumo_energia, custo_energia;
    float custo_alimentacao, custo_total;
    float custo_por_participante, saldo;

    // Entrada de dados
    // Solicite ao usuario todos os dados do evento.
    printf("Quantidade total de participantes: ");
    scanf("%d", &qte_participantes);

    printf("Quantidade de jogadores em cada time: ");
    scanf("%d", &qte_jogadores_por_time);

    printf("Quantidade de computadores disponíveis: ");
    scanf("%d", &qte_computadores);

    printf("Potência média de cada computador, em watts: ");
    scanf("%f", &potencia);

    printf("Duração do evento, em horas: ");
    scanf("%f", &duracao);

    printf("Preço de 1 kWh de energia: ");
    scanf("%f", &preco_kwh);

    printf("Preço de um kit de alimentação por participante: ");
    scanf("%f", &preco_kit);

    printf("Outros custos do evento: ");
    scanf("%f", &outros_custos);

    printf("Orçamento máximo disponível para o evento: ");
    scanf("%f", &orcamento);


    // Calculos
    // Calcule:
    // - quantidade de times;
    // - consumo de energia;
    // - custo da energia;
    // - custo da alimentacao;
    // - custo total;
    // - custo por participante;
    // - saldo do orcamento.
    qte_times = qte_participantes % qte_jogadores_por_time;
    consumo_energia = (qte_computadores * potencia * duracao) / 1000;
    custo_energia = consumo_energia * preco_kwh;
    custo_alimentacao = qte_participantes * preco_kit;
    custo_total = custo_energia + custo_alimentacao + outros_custos;
    custo_por_participante = custo_total / qte_participantes;
    saldo = orcamento - custo_total;

    // Relatorio geral
    printf("======= ARENA TECH =======\n\n");
    // Exiba participantes e quantidade de times.
    printf("Participantes: %d\n", qte_participantes);
    printf("Times necessários: %d\n", qte_times);
    printf("Computadores Disponíveis: %d\n\n", qte_computadores);


    // Analise da infraestrutura
    // Verifique se a quantidade de computadores e suficiente.
    if(qte_computadores >= qte_participantes) {
        printf("Infraestrutura: Suficiente \n\n");
    }
    else {
        printf("Infraestrutura: Insuficiente \n\n");
    }


    // Classificacao do consumo de energia
    // Classifique o consumo como:
    // BAIXO, MODERADO ou ALTO.
    printf("Consumo estimado: %.2f kwh\n", consumo_energia);
    if (consumo_energia <= 20){
        printf("Classificação do Consumo: BAIXO \n");
    } else if (consumo_energia <= 40) {
        printf("Classificação do Consumo: MODERADO \n");
    } else {
        printf("Classificação do Consumo: ALTO \n");
    }

    // Relatorio de custos
    // Exiba os custos calculados.
    printf("Custo de Energia: R$ %.2f \n", custo_energia);
    printf("Custo da Alimentação: R$ %.2f \n", custo_alimentacao);
    printf("Outros Custos: R$ %.2f \n", outros_custos);
    printf("CUSTO TOTAL: R$ %.2f \n", custo_total);
    printf("CUSTO POR PARTICIPANTE: R$%.2f \n\n", custo_por_participante);




    // Analise do orcamento
    // Informe se o evento esta:
    // DENTRO DO ORCAMENTO,
    // NO LIMITE DO ORCAMENTO
    // ou ACIMA DO ORCAMENTO.
    printf("Orçamento Disponível: R$%.2f\n", orcamento);
    printf("Saldo: R$%.2f \n", saldo);
    if (custo_total > orcamento) {
        printf("Situação do Orçamento: ACIMA DO ORÇAMENTO\n\n");
    } else if (custo_total <= orcamento && saldo <= orcamento * 0.05){
        printf("Situação do orçamento: LIMITE DO ORÇAMENTO\n\n");
    } else {
        printf("situação do orçamento: DENTRO DO ORÇAMENTO\n\n");
    }

    printf("Decisão Final: DENTRO DO EVENTO");



    // Decisao final
    // Informe se o evento esta:
    // APROVADO,
    // APROVADO COM RESSALVAS
    // ou NAO RECOMENDADO.






    return 0;
}

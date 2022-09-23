# C_mfk
C exercises

> VS code => open folder with file as working directory <br />
> open file in termiinal <br />
> gcc file_name.c <br />
> .\a.exe <br />

Тестирование на кластере:

    ```
    object Main {
        def apply(): Main = new Main
        
        lazy val spark = SparkSession.builder.getOrCreate()
        
        def main(args: Array[String]): Unit = {
        val cardsData: DataFrame = spark.table("rsapc_dm_snp.cards_data").select("event_dt")
        
            val result = Main().calculate(Map("cards_data" -> cardsData),
              currentDate = LocalDate.of(2022, 6, 8),
              depth = Array(0),
              spark)
        
            result
              .repartition(1)
              .write
              .mode("overwrite")
              .parquet("general_dsl/test/test_daily_statistics_acquiring_after_review")
        }
    }
    ```
